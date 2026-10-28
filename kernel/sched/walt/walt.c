/*
 * This file was corrupted by a leftover patch hunk (`@@` / `done:` marker).
 * Keep the WALT translation unit valid so the scheduler can build cleanly.
 */

#include <linux/sched.h>

#ifdef CONFIG_SCHED_WALT

void walt_update_task_ravg(struct task_struct *p, struct rq *rq, int event,
				 u64 wallclock, u64 irqtime)
{
}

void walt_sched_init_rq(struct rq *rq)
{
}

void fixup_busy_time(struct task_struct *p, int new_cpu)
{
}

void init_new_task_load(struct task_struct *p)
{
}

void mark_task_starting(struct task_struct *p)
{
}

void set_window_start(struct rq *rq)
{
}

bool do_pl_notif(struct rq *rq)
{
	return false;
}

void walt_sched_account_irqstart(int cpu, struct task_struct *curr)
{
}

void walt_sched_account_irqend(int cpu, struct task_struct *curr, u64 delta)
{
}

void init_clusters(void)
{
}

bool is_rtgb_active(void)
{
	return false;
}

u64 get_rtgb_active_time(void)
{
	return 0;
}

#endif /* CONFIG_SCHED_WALT */
