@class NSUUID, NSString, NSData, ManagedSticker;

@interface ManagedRepresentation : NSManagedObject

@property (nonatomic) BOOL isPreferred;
@property (nonatomic) int index;
@property (nonatomic) int byteCount;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *role;
@property (nonatomic) double size_h;
@property (nonatomic) double size_w;
@property (nonatomic, copy) NSString *uti;
@property (nonatomic) int version;
@property (nonatomic, retain) ManagedSticker *sticker;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
