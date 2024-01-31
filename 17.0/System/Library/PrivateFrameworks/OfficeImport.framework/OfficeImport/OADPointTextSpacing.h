@interface OADPointTextSpacing : OADTextSpacing {
    int mPoints;
}

- (unsigned long long)hash;
- (int)points;
- (BOOL)isEqual:(id)a0;
- (id)initWithPoints:(int)a0;

@end
