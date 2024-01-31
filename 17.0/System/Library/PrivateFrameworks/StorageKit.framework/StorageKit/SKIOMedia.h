@class NSString;

@interface SKIOMedia : SKIOObject

@property (readonly, copy) NSString *BSDName;

- (id)initWithDADisk:(id)a0;
- (id)copyBlockDevice;
- (id)initWithDevName:(id)a0;

@end
