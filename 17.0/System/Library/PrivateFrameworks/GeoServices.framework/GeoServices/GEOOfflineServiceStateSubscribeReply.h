@class NSString;

@interface GEOOfflineServiceStateSubscribeReply : GEOXPCReply <GEOXPCReply>

@property (nonatomic) unsigned long long savedState;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned long long currentSuggestedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (BOOL)isValid;

@end
