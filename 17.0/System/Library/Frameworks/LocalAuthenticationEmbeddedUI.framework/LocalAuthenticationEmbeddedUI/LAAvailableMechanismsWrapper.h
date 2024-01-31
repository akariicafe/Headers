@class NSArray;

@interface LAAvailableMechanismsWrapper : NSObject {
    NSArray *_mechanismEvents;
}

@property (readonly, nonatomic) BOOL allowsPasscode;
@property (readonly, nonatomic) BOOL allowsBiometry;
@property (readonly, nonatomic) BOOL allowsWatch;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)initWithMechanismEvents:(id)a0;

@end
