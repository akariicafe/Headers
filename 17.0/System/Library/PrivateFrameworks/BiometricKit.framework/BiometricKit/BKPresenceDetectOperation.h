@interface BKPresenceDetectOperation : BKOperation

@property (nonatomic) long long priority;

- (id)optionsDictionaryWithError:(id *)a0;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;

@end
