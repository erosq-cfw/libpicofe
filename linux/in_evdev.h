extern int in_evdev_allow_abs_only;

int in_evdev_init(const struct in_pdata *pdata);

/* Poll for device (dis)connect -- returns 1 when the caller should re-run
 * in_probe(). Cheap enough to call once per frame; see in_evdev.c. */
int in_evdev_hotplug_check(void);
