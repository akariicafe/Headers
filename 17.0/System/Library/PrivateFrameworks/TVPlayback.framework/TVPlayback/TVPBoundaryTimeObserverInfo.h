@class NSArray;

@interface TVPBoundaryTimeObserverInfo : NSObject

@property (copy, nonatomic) NSArray *times;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) id tokenFromAVPlayer;

- (void).cxx_destruct;

@end
