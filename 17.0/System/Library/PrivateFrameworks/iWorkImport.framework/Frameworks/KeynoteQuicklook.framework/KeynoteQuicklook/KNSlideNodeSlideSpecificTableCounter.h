@class NSUUID, NSString;

@interface KNSlideNodeSlideSpecificTableCounter : NSObject

@property (retain, nonatomic) NSUUID *tableInfoUUID;
@property (readonly, nonatomic) unsigned long long linkCount;
@property (readonly, nonatomic) NSString *stringValue;

- (id)description;
- (void)decrement;
- (void).cxx_destruct;
- (void)increment;
- (id)initWithTableInfoUUID:(id)a0 andLinkCount:(unsigned long long)a1;

@end
