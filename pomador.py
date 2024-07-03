import time

def pomodoro_timer(work_duration=25, short_break=5, long_break=15, cycles=4):
    """
    Pomodoro timer function.
    
    :param work_duration: Duration of work period in minutes.
    :param short_break: Duration of short break in minutes.
    :param long_break: Duration of long break in minutes.
    :param cycles: Number of work/break cycles before a long break.
    """
    
    def countdown(minutes):
        """Countdown timer."""
        total_seconds = minutes * 60
        while total_seconds:
            mins, secs = divmod(total_seconds, 60)
            timeformat = '{:02d}:{:02d}'.format(mins, secs)
            print(timeformat, end='\r')
            time.sleep(1)
            total_seconds -= 1
        print("Time's up!")

    for i in range(cycles):
        print(f"\nCycle {i+1} of {cycles}")
        
        # Work period
        print(f"Work for {work_duration} minutes.")
        countdown(work_duration)
        
        if i < cycles - 1:
            # Short break
            print(f"Take a short break for {short_break} minutes.")
            countdown(short_break)
        else:
            # Long break
            print(f"Take a long break for {long_break} minutes.")
            countdown(long_break)

if __name__ == "__main__":
    # Example usage:
    # Work for 25 minutes, short break for 5 minutes, long break for 15 minutes, 4 cycles
    pomodoro_timer(work_duration=25, short_break=5, long_break=15, cycles=4)