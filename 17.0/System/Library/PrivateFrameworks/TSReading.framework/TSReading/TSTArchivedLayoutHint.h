@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>

@property (retain, nonatomic) TSTLayoutHint *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)a0 hint:(id)a1;

@end
