@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {
    unsigned long long _hashValue;
}

@property (retain, nonatomic) NSMutableSet *processes;

- (id)init;
- (unsigned long long)hash;
- (void)addProcess:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initUniqueProcessGroup;

@end
