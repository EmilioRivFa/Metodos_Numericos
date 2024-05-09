from pytube import YouTube
link=input("https://youtu.be/O-0YjKlb1FY?si=zH0NfZ8jS3LWHtfu")
video=YouTube(link)
stream=video.streams.get_highest_resolution()
stream.downland()
