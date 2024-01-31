@class NSData;

@interface SFBLEData : NSObject

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
