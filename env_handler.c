#include "shell.h"

/**
 * env_handler - handles the env built-in command
 * @s: string
 * @env: the env from the main()
 */
bool env_handler(char *s, char *env[])
{
	if (_strcmp(s, "env", 0, 2))
	{
		print_env(env);
		return (true);
	}

	return (false);
}