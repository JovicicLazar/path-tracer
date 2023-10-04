#include <iostream>

#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"

int main(int argc, char* argv[]) {
    
    hittable_list world;

    world.add(make_shared<sphere>(point3(0,0,-1), 0.5));
    world.add(make_shared<sphere>(point3(0,-100.5,-1), 100));

    camera cam;

    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 400;
    cam.samples_per_pixel = 10;
    cam.max_depth = 10;

    cam.render(world);

    return 0;
}
