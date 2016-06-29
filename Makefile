all:
	make -C ASM_DIR
	make -C VM

clean :
	make -C ASM_DIR clean
	make -C VM clean

fclean :
	make -C ASM_DIR fclean
	make -C VM fclean

re : fclean all
