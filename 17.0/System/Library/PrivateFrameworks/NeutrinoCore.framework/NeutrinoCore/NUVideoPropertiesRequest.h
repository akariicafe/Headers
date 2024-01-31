@interface NUVideoPropertiesRequest : NURenderRequest

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)submitSynchronous:(out id *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
