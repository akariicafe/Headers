@interface SNSystemConfiguration : NSObject {
    unsigned int _channelCount;
    double _sampleRate;
}

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
