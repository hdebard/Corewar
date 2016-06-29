.name "Leonherd"
.comment "WTF is this place !?"

zjmp %:esclavagisme
	
start:
	lfork %2044
	sti r1, %:live, %1
	sti r1, %:first_live, %1
	sti r1, %:eternal_live, %1
	sti r1, %:esclavagisme, %1

first_live:
	live %1
	lfork %:eternal_live

live:
	live %1
	lfork %:start
	and r1, %0, r2
	zjmp %:live

eternal_live:
	live %1
	sti r1, %:eternal_live, %1
	and r1, %0, r2
	zjmp %:eternal_live

esclavagisme:
	live %1
	and r1, %0, r2
	zjmp %:esclavagisme

