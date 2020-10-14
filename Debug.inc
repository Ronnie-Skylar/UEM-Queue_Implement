// @region User-defined debugging enum. //

typedef enum e_Debug{
	DebugLog,
	DebugWarning,
	DebugError
} DebugLevel;

// @endregion //



// @region Functions declaration for debugging //

void Debug(char message[], DebugLevel Level);

// @endregion //



// @region Function definition //

void Debug(char message[], DebugLevel Level){

	if(strlen(message) == 0){
		Debug("The debug message is empty.", DebugWarning);
		return;
	}

	switch((int)Level){

		case (int)DebugLog:{

			setColor(DARKGREY);
			printf("[LOG] %s", message);
			setColor(WHITE);

			break;
		}

		case (int)DebugWarning:{

			setColor(YELLOW);
			printf("[WARNING] %s", message);
			setColor(WHITE);

			break;
		}

		case (int)DebugError:{

			setColor(RED);
			printf("[ERROR] %s", message);
			setColor(WHITE);

			break;
		}
		default:{

			Debug(message, DebugLog);

			return;
		}
	}

	PushLine();

	return;
}

// @endregion //