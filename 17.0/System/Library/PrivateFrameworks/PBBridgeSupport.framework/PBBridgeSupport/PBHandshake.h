@interface PBHandshake : NSObject

@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int state;

- (id)description;

@end
