@class NSString;

@interface ESDClientShareResponseDelegate : ESDClientDelegate <DAEventsCalendarSharingResponseConsumer>

@property (retain, nonatomic) NSString *calendarID;
@property (retain, nonatomic) NSString *shareID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)shareResponseFinishedWithError:(id)a0;
- (void)_doResponseWithBlock:(id /* block */)a0;
- (id)initWithAccountID:(id)a0 client:(id)a1 calendarID:(id)a2;
- (void)reportAsJunk;
- (void)respondToShareRequestWithResponse:(long long)a0;

@end
