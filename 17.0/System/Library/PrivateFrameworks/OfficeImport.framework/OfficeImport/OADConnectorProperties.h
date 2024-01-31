@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)from;
- (id)to;

@end
