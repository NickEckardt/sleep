# How to get Sleep and Wake up on Time as a Lazy Computer Science Student

### by Nicholas Eckardt

I never seem to get enough sleep.  If I don’t watch what I’m
doing, I can easily stay up browsing the internet until 5am. On the
flip side I also tend to sleep through most alarms. I have tackled these 
problems the only way I know how: program my computer to solve them for me. 
Here are a few tools for linux which help me either go to sleep on time, or
wake up when I need to.  

## Going to Sleep on Time

### Getting your Body Ready to Sleep

You may have heard before that you shouldn't browse the web or use your phone
before going to sleep. The reason for this is that while your body is exposed
to 
[blue light](https://www.somnilight.com/blue-light-insomnia.html) it does
not produce the chemical 
[melatonin](https://www.webmd.com/sleep-disorders/tc/melatonin-overview#1), 
which primarily helps you go to sleep. Of course if you're anything like me, 
you won't set aside your evening web browsing for anything. To combat this, 
you can install an app such as **[redshift](https://github.com/jonls/redshift)**
which allows you to control the color temperature of your screen. It even
auto-detects your timezone, so the time at which your screen goes from
normal to red happens in accordance with the sun. I personally have it 
set to pacific time, since I wake up and go to sleep around 3 hours later than
usual, but you can pick whatever works best for you. 

### Preventing "One More Video" Syndrome

How many times have you started watching videos or a show only to keep clicking
"next video" indefinetly. The simplest way to stop myself is simply set up
a timed shutdown or sleep. To do this on linux, simply run the command 
`shutdown +t &` 
where t is how many minutes in the future you want to shut down. In my
experience, it is much better to set a generous deadline so once that
deadline hits, you won't be able to justify canceling it. 
If you change 
your mind, run `shutdown -c` to cancel any scheduled shutdowns. 

If you are watching videos from a local video player such as mplayer, you can
even have the player shut itself down after finishing the video. I tend to put
on an episode of a show i'm currently watching, and have my computer 
automatically put itself to sleep on completion. You can find the script
[here](https://github.com/NickEckardt/sleep) named **goodnight**. 

## Waking up on Time

Even if you go to sleep early, if you don't wake up to your alarm
you won't be able to fall asleep the next night. Therefore, an effective
alarm is key. An optimal alarm has 3 parts to it: volume, annoyance, and threat
of social suicide. The first two are self explanatory: volume is necessary for
you to actually hear your alarm. Annoyance is to make you want to turn it off.
 I’ve managed to sleep through blaring
dubstep for more than 2 hours, so the third factor is neccessary. 

The solution is to build an alarm tone which starts off quiet, then plays a 
somewhat louder warning tone and after
a minute blasts a tone lound enough to wake your neighbors. You can find the
alarm tone I use [here](https://github.com/NickEckardt/sleep) named alarm.mp3. 
Surprisingly, the alarm has only gotten to the loud part once, all other
times I have managed to wake up and stop it in time. 

## But I Find Myself Going Back to Sleep

I've been there too. I wake up from my alarm, and decide "I have plenty of time
before my first class, so I'll just go back to sleep". There is only one
surefire solution to make sure I get out of bed: Making plans with people early
the next day with people I care about.  you don't have plans, try to set up
studying with friends, or some sort of social event. Waking up at 10am and
doing something non-productive until 12 is better than waking up at 2 and
getting out of bed at 3. 

## Conclusion

Being in college comes with a ton of freedom. However, without anyone watching
over me my sleep schedule tends to suffer. With the help of these tools, I have
managed to stabilize my sleep schedule, however sometimes its best to have 
other people hold you accountable as well. 
