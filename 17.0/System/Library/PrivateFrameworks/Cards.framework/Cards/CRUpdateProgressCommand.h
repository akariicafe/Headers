@class NSProgress, NSDictionary, NSString;

@interface CRUpdateProgressCommand : NSObject <CRCommand>

@property (nonatomic) unsigned long long event;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL animatesProgress;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
