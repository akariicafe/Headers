@class NSNumber, VUIMediaEntityType, NSString;

@interface VUIMPMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>

@property (copy, nonatomic) NSNumber *persistentID;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaItemIdentifierWithMediaItem:(id)a0;
+ (id)showIdentifierWithMediaItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersistentID:(id)a0 mediaEntityType:(id)a1;

@end
