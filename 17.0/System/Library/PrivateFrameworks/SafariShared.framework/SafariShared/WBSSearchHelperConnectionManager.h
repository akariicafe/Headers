@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject {
    NSMutableSet *_clients;
}

@property (retain, nonatomic) NSXPCConnection *searchHelperConnection;

+ (id)sharedManager;

- (id)init;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (id)searchHelperConnectionRequestedByClient:(id)a0;

@end
