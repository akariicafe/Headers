@interface IMIDSService : NSObject

+ (BOOL)service:(id)a0 sendMessage:(id)a1 fromAccount:(id)a2 toDestinations:(id)a3 priority:(long long)a4 options:(id)a5 identifier:(id *)a6 error:(id *)a7;
+ (BOOL)service:(id)a0 sendMessage:(id)a1 toDestinations:(id)a2 priority:(long long)a3 options:(id)a4 identifier:(id *)a5 error:(id *)a6;

@end
