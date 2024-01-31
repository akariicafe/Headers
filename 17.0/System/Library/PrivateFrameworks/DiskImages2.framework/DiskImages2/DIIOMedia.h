@class NSString;

@interface DIIOMedia : DIIOObject

@property (readonly, copy) NSString *BSDName;

- (id)copyBlockDeviceWithError:(id *)a0;
- (id)initWithDevName:(id)a0 error:(id *)a1;

@end
