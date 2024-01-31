@class Protocol, NSUUID, MKFObjectDatabaseID, NSSet;

@interface HMCRedirectorChangeItem : HMFObject

@property (readonly) Protocol *modelType;
@property (readonly) NSUUID *modelID;
@property (readonly) MKFObjectDatabaseID *databaseID;
@property (readonly) NSSet *changedProperties;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isObjectType:(id)a0;

@end
