@interface LibSCLM : SLAMObjC

+ (id)PerformScript:(unsigned long long)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (id)PerformScriptWithName:(id)a0 sefwPath:(id)a1 seHandle:(id)a2 logSink:(id)a3;
+ (BOOL)InspectSEFW:(id)a0 closure:(id /* block */)a1 error:(id *)a2;
+ (id)PerformOnlyScriptInSEFW:(id)a0 seHandle:(id)a1 logSink:(id)a2;

@end
