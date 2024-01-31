@class MPModelRequest;

@interface MPModelShimRequest : MPRequest

@property (retain, nonatomic) MPModelRequest *modelRequest;

+ (Class)responseClass;

- (id)middlewareClasses;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
