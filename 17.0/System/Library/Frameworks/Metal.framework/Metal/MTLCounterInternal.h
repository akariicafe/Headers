@class NSString;

@interface MTLCounterInternal : NSObject <MTLCounter> {
    NSString *_description;
}

@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 description:(id)a1;

@end
