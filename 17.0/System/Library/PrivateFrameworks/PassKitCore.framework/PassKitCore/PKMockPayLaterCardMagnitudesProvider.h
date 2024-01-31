@class NSString, PKPayLaterCardMagnitudes;

@interface PKMockPayLaterCardMagnitudesProvider : NSObject <PKPayLaterCardMagnitudesProvider>

@property (retain, nonatomic) PKPayLaterCardMagnitudes *magnitudes;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)refreshMagnitudes;

@end
