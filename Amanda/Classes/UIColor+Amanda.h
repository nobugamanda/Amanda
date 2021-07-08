//
//  UIColor+Amanda.h
//  amandaSupport
//
//  Created by Amanda on 2021/7/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Amanda)



/**
 *  使用HEX命名方式的颜色字符串生成一个UIColor对象 摘自 QMUI
 *
 *  @param hexString 支持以 # 开头和不以 # 开头的 hex 字符串
 *      #RGB        例如#f0f，等同于#ffff00ff，RGBA(255, 0, 255, 1)
 *      #ARGB       例如#0f0f，等同于#00ff00ff，RGBA(255, 0, 255, 0)
 *      #RRGGBB     例如#ff00ff，等同于#ffff00ff，RGBA(255, 0, 255, 1)
 *      #AARRGGBB   例如#00ff00ff，等同于RGBA(255, 0, 255, 0)
 *
 * @return UIColor对象
 */
+ (nullable UIColor *)colorWithHexString:(nullable NSString *)hexString;




/// 通过0xffffff的16进制数字 和 透明度 创建颜色
/// @param hex 0xffffff
/// @param alpha 透明度 取值 0到1
/// @return UIColor 对象
+ (nullable UIColor *)colorWithHex:(NSUInteger)hex alpha:(CGFloat)alpha;



/// 通过0xffffff的16进制数字 和 透明度 创建颜色
/// @param hex 0xffffff
/// @return UIColor 对象
+ (UIColor *)colorWithHex:(NSUInteger)hex;


@end

NS_ASSUME_NONNULL_END
