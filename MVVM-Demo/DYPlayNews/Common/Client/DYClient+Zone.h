//
//  DYClient+Zone.h
//  DYPlayNews
//
//  Created by 袁斌 on 2017/6/2.
//  Copyright © 2017年 https://github.com/DefaultYuan. All rights reserved.
//

#import "DYClient.h"

@interface DYClient (Zone)

- (RACSignal *) fetchHotZone;
- (RACSignal *) fetchZoneDiscuz;
- (RACSignal *) fetchDiscuzImage;
- (RACSignal *) fetchDiscuzList;
- (RACSignal *) fetchDiscuzDetail;
@end
