@interface OADGraphic : OADDrawable {
    OADGraphic *mMasterGraphic;
}

- (id)geometry;
- (id)description;
- (void).cxx_destruct;
- (id)graphicProperties;
- (id)masterGraphic;
- (void)setMasterGraphic:(id)a0;

@end
