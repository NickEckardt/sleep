# How to get Sleep and Wake up on Time as a Lazy Computer Science Student

### by Nicholas Eckardt

I never seem to get enough sleep.  If I don’t watch what I’m
doing, I can easily stay up browsing the internet until 5am. On the
flip side I also tend to sleep through most alarms. As a Computer Science 
student I have tackled these 
problems the only way I know how: Program my computer to solve them for me. 
Here are a few tools for Linux which help me either go to sleep on time, or
wake up when I need to.  

## Going to Sleep on Time

#### Getting your Body Ready to Sleep

You may have heard that you shouldn't browse the web or use your phone
before going to sleep. The reason for this is that while your body is exposed
to 
[blue light](https://www.somnilight.com/blue-light-insomnia.html) it does
not produce the chemical 
[melatonin](https://www.webmd.com/sleep-disorders/tc/melatonin-overview#1), 
which primarily helps you go to sleep. Of course if you're anything like me, 
you won't set aside your evening web browsing for anything. To combat this, 
you can install an program such as **[redshift](https://github.com/jonls/redshift)**
which automatically adjusts the colors on your screen to reduce the amount
of blue light given off. During the day your screen will have the same colors
as normal, however after sunset it will turn down the blue colors, making your
screen look more red (hence the name). This allows your body to begin entering
"sleep mode" so you don't lie in bed for another hour after turning off your
device. 

#### Preventing "One More Video" Syndrome

How many times have you started watching videos or a show only to keep clicking
"next video" indefinetly. The simplest way to stop myself is simply set up
a timed shutdown or sleep. To do this on Linux, simply run the command 
`shutdown +t &` 
where t is how many minutes in the future you want to shut down. To cancel the
scheduled shutdown, simply run `shutdown -c`.

The most useful part about a timed shutdown is that you can start an episode of 
your favorite show, slip into bed, and your computer will automatically 
shut itself down when it is done. Since I would have to stand up to 
click the "next" button, I tend to just turn around and go to sleep, rather 
than continue binge watching. 

### Waking up on Time

Even if you go to sleep early, if you don't wake up to your alarm
you won't be able to fall asleep the next night. Therefore, an effective
alarm is key. An optimal alarm has 3 parts to it: Volume, annoyance, and threat
of social suicide. The first two are self explanatory: volume is necessary for
you to actually hear your alarm. Annoyance is to make you want to turn it off.
However, threat of social suicide is the key ingredient to get you out of
bed to turn off the alarm, rather than curl into a ball and tune it out. 

The solution is to build an alarm tone which starts off quiet, then plays a 
somewhat louder warning tone, and after around
a minute blasts a tone loud enough to wake your neighbors. You can find the
alarm tone I use [here](https://github.com/NickEckardt/sleep) named 
[alarm-tone.mp3](https://github.com/NickEckardt/sleep/blob/master/alarm/alarm-tone.mp3). 
I have also written a program which runs the alarm tone, which can 
be found [here](https://github.com/NickEckardt/sleep/tree/master/alarm), 
instructions in the README. Just make sure to test it before running it in
production!

You will of course need some sort of computer to run this alarm. It's best
to hook your computer up to some loud speakers, so that if the alarm gets
to the loud part, you're sure not to wake up. Now that you already have 
the computer and speakers, you could also add some 
[background noise](https://mynoise.net/) for the night 
to help you tone out your loud neighbors you have. 

#### But I Find Myself Going Back to Sleep

I've been there too. I wake up from my alarm, and decide "I have plenty of time
before my first class, so I'll just go back to sleep". This is an easy way
to destroy your sleep schedule for days to come. The best solution to this
is to make plans for the next day with people who will care if you
don't show up. Blowing off lecture because i'm too lazy to get up? Sure. 
Skipping a study session I specifically planned the day before? No way. 
Making plans early the next day ensures you get up in time to keep
your sleep schedule in tact. 

## Conclusion

Being in college comes with a ton of freedom. However, without anyone watching
over me my sleep schedule tends to suffer. With the help of these tools and
tricks I have managed to stabilize my sleep schedule. Hopefully they help
you as well!
