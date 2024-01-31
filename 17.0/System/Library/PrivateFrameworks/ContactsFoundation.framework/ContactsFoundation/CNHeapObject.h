@class NSString;

@interface CNHeapObject : NSObject

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *binary;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long bytes;

- (id)description;
- (void).cxx_destruct;
- (id)classAndBinaryKey;

@end
