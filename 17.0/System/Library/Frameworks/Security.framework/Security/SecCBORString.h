@class NSString;

@interface SecCBORString : SecCBORValue {
    NSString *m_data;
}

- (void)write:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (int)fieldType;
- (id)initWith:(id)a0;
- (id)getLabel;

@end
