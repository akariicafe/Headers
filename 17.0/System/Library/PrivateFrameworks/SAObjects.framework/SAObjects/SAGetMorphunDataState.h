@class SAMorphunDataState, NSString, NSArray;

@interface SAGetMorphunDataState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAMorphunDataState *clientState;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMorphunDataState;
+ (id)getMorphunDataStateWithDictionary:(id)a0 context:(id)a1;

@end
