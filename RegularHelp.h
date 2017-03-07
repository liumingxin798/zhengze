//
//  RegularHelp.h
//

#import <Foundation/Foundation.h>

@interface RegularHelp : NSObject

//数字匹配
+ (BOOL) validateUserAge:(NSString *)str;
//检验邮箱
+ (BOOL) validateUserEmail:(NSString *)str;
//检验手机号
+ (BOOL) validateUserPhone:(NSString *)str;
//验证是否为正数
+ (BOOL) validatePositiveNumber:(NSString *)str;
//
+ (BOOL) validateMoney:(NSString *)str;

@end
