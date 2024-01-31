@interface CATCommonApi : NSObject

+ (id)CreateDEExecutor:(id)a0 templateDir:(id)a1 catId:(id)a2 paramsXML:(id)a3 localeXML:(id)a4 parameters:(id)a5 globalContext:(id)a6 callback:(id)a7 options:(int)a8;
+ (id)DEResultToDialogExecutionResult:(id)a0 catId:(id)a1;
+ (void)ConfigureDEExecutor:(id)a0 parameters:(id)a1 globalParameters:(id)a2 catId:(id)a3 callback:(id)a4 options:(int)a5;
+ (id)DEResultToCATResult:(id)a0 catId:(id)a1;
+ (BOOL)UpdatesEnabled:(int)a0;
+ (id)NSErrorFromString:(id)a0 errorCode:(id)a1;

@end
