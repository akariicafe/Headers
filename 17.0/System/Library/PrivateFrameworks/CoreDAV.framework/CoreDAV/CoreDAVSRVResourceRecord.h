@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSString *target;

- (id)description;
- (void).cxx_destruct;

@end
