@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}

- (unsigned long long)hash;
- (float)value;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(float)a0;

@end
