@class NSArray;

@interface DTSysmonProcessRecord : NSObject

@property (nonatomic) int pid;
@property (retain, nonatomic) NSArray *attributes;

- (void).cxx_destruct;

@end
