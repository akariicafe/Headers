@class NSString;

@interface DADClientOfficeHoursRequestDelegate : DADClientDelegate <DAEventsOfficeHoursRequestResponseConsumer>

@property (retain, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)setOfficeHours:(id)a0;
- (void)_doRequestWithBlock:(id /* block */)a0;
- (void)_finishedWithOfficeHours:(id)a0 error:(id)a1 canceled:(BOOL)a2;
- (void)fetchOfficeHours;
- (void)officeHoursRequestWithID:(id)a0 finishedWithError:(id)a1;
- (void)officeHoursRequestWithID:(id)a0 finishedWithOfficeHours:(id)a1 error:(id)a2;

@end
