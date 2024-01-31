@class NSString, NSSet;

@interface HDCloudSyncSerializedField : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSSet *classes;
@property (readonly, nonatomic) BOOL encrypted;

+ (id)fieldForKey:(id)a0 classes:(id)a1 encrypted:(BOOL)a2;

- (void).cxx_destruct;

@end
