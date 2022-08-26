`42 School Project`

# MiniRT 🎥🖼️🌌

<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl79akydw00490gi8w73o3in5/project/2144196" alt="osurcouf's 42 miniRT Score" /></a>

My first raytracer in C.

* run `git clone git@github.com:Knulpinette/42_04_minirt.git`
* run `make`
* run `./minirt scenes/ANY_SCENE` (it might take a few seconds to generate the image)

## The Starter Kit 🛠️

When you haven't done math for 10 years, diving into miniRT as a refresher project is brutal. It is however not impossible - and really cool to realise you would have loved maths if you had realised all the amazing things it could be used for when you were young.

> A million thanks to [@gmzorz](https://github.com/gmzorz) whose starter kit I've expanded on - and would have never gotten anywhere without. <br>
> To keep you going in moments of darkness, I'll quote his very inspiring words: <br>
>> <i>"My maths was also pretty nonexistant... Luckily this project isn’t rocket science but linear algebra."</i>

### Essential Links 🔗
* If you didn't cover that already in the second ring: [the MiniLibX documentation](https://harm-smits.github.io/42docs/libs/minilibx)
* A list of [<maths.h> functions](https://yeosong1.github.io/math-h-%ED%95%A8%EC%88%98)

### Vectors 📐

You should know **what vectors are** and **how to calculate** with them (addition, subtraction, etc). Learn also about **unit length vectors** and **the magnitude** of a vector (pythagoras theorem). Then move on to **dot product** and **cross product** (you will use them a lot in miniRT).

* A [class on linear algebra](https://www.youtube.com/playlist?list=PLZHQObOWTQDPD3MizzM2xVFitgF8hE_ab)

### Raytracing Essentials 💠

You will need to know the difference between a **ray tracer** and a **path tracer**. It's important to stay on track with raytracing and not pathtracing because this approach is more challenging. You should also learn the difference between **forward** and **backward raytracing** (miniRT is backwards). <br>
You'll need to learn about **primary rays**, **shadow rays** and **camera rays**, as well as the **camera model**, **matrixes** and the **lookat function**.

* This [Pixar class on Rendering 101](https://www.khanacademy.org/computing/pixar/rendering)
* This scratchpixels [Mini Ray Rendering tutorial/class](https://www.scratchapixel.com/lessons/3d-basic-rendering/minimal-ray-tracer-rendering-simple-shapes/parametric-and-implicit-surfaces)
* [Ray Tracing in One Week End](https://www.scratchapixel.com/lessons/3d-basic-rendering/minimal-ray-tracer-rendering-simple-shapes) (and [the sequels](https://raytracing.github.io/) if you're someone somewhat suicidal). Warning: be careful to only take what you should from it however, as it uses path tracing. The first 6 chapters cover some really helpful stuff including a couple bonus assignments.
* [A list of Notions](https://www.notion.so/MiniRT-71995aae3aac48d58aaf75be4c3e9193) from the project (in spanish 💃)

### A Few Tips 📌

* Get a pen and a paper. Draw. Visualise. It <i>helps</i>.
* Start with the sphere (it's the easiest one). [This Shadertoy video tutorial](https://www.youtube.com/watch?v=HFPlKQGChpE) can help you understand and figure out the intersection equation logic so you can move on to the other shapes afterwards.
* When in doubt, you can help yourself with this [simple MiniRT in Javascript](https://github.com/antirez/jsrt/blob/master/rt.html) that really helps.

#### MiniRT respositories to go check out 🚀

* [MiniRT gmzorz](https://github.com/gmzorz/MiniRT) (incredible project)
* [MiniRT Sungwoo](https://github.com/cos18/miniRT) 
* [MiniRT Dlee](https://github.com/eastriverlee/raytracing) 
* [MiniRT for Linux](https://github.com/j53rran0/miniRT-for-Linux) 
* [Another MiniRT](https://github.com/nesvoboda/minirt) 
* [Colorful MiniRT](https://github.com/solaldunckel/miniRT) 

## MiniRT 😈 VS Cub3D 👾🕹️

If you're from 42 and ended up on this project, chances are you're wondering if you should take on this project or go to his most liked, easier counterpart: cub3D. In the end, it all comes down to what your priorities are - both projects are cool and will teach you a lot.

Here are a few thougts:
- You will be able to do cub3D if you do miniRT, the opposite isn't so true. 
- The investement of time and effort will be bigger with miniRT than with cub3D, but so will the takeaways.
- MiniRT gave me the confidence I can debug anything if I just don't give up - I don't know if that will turn out to be true, but it's one of the most valuable lessons I've been taught by a 42 project so far. 
- It also was the first big project I did on my own (I did miniRT before the change in curriculum) and it taught me a lot on how to write modular code.
- Because the documentation is sparse on how to do your own raytracer in C, it also taught me better how to deal with lack of documentation which is a very real life case scenario. I contacted people who did the project from other schools, I also went for documentations in other langages (speaking or coding) that I often didn't even understand. 
- You will never, <i>ever</i>, look at a animation movie or CGI the same way. 

In the end, if you have time and want to learn more or want to work in animation or graphics, go for miniRT. If you want to work in games or if the blackhole is looming on the horizon, go for cub3D. 

## MiniRT Logic 💡

**You can go check the code for comments, they are pretty extensive.**

#### 1. Generate the camera ray 〽️

First, you generate the ray from the camera (eye) by calculting with a matrix and lookat function what are going to be the ratios of your scene. You're basically setting  up the size, depth of your universe in relation to the window that will be displaying it in the end.

#### 2. Check if it hits an object ⚡

Then you calculate with the intersection equations (each type of shape has its own) if your ray hits any of the object present in the scene. The logic is that you're never telling your code to create any object, you're just getting informed of if your ray hits a point of its mathematical formula.

#### 3. Get the color of the pixel 🔆

Depending on the previous result, you calculate the amount of light your pixel is getting to define its final color. How close is it to the light? Is it in the shadows? Is there more than one light? 

#### 4. Place the color of the pixel on the window 🟨

<i>Et voilà!</i>


### Enjoy 🦕
