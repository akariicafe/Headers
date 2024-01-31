@class NSString, NSDate;

@interface TPMachineID : NSObject

@property (readonly) NSString *machineID;
@property (readonly) unsigned long long status;
@property (readonly) NSDate *modified;

- (id)initWithMachineID:(id)a0 status:(unsigned long long)a1 modified:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
