@class NSString;

@interface _HDSPConcreteSource : NSObject <HDSPSource>

@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) BOOL dontNotify;
@property (nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
