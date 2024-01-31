@class NSString;

@interface MKSIM : NSObject

@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *carrier;
@property (retain, nonatomic) NSString *carrierID;
@property (retain, nonatomic) NSString *mccmnc;
@property (retain, nonatomic) NSString *gid1;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
