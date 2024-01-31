@class NSString, NSDictionary, REMObjectID;

@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject>

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) NSDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newObjectID;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)objectIDWithUUID:(id)a0;

@end
